# 어셈블리어 개인 공부 정리
<!-- TOC -->

- [어셈블리어 개인 공부 정리](#%EC%96%B4%EC%85%88%EB%B8%94%EB%A6%AC%EC%96%B4-%EA%B0%9C%EC%9D%B8-%EA%B3%B5%EB%B6%80-%EC%A0%95%EB%A6%AC)
    - [어셈블리어 프로그램 구조](#%EC%96%B4%EC%85%88%EB%B8%94%EB%A6%AC%EC%96%B4-%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8-%EA%B5%AC%EC%A1%B0)
        - [데이터 섹션 Data Section](#%EB%8D%B0%EC%9D%B4%ED%84%B0-%EC%84%B9%EC%85%98-data-section)
        - [텍스트 섹션 Text Section](#%ED%85%8D%EC%8A%A4%ED%8A%B8-%EC%84%B9%EC%85%98-text-section)
        - [스택 Stack](#%EC%8A%A4%ED%83%9D-stack)
        - [힙 Heap](#%ED%9E%99-heap)
        - [함수 호출 규약 Function Calling Conventions](#%ED%95%A8%EC%88%98-%ED%98%B8%EC%B6%9C-%EA%B7%9C%EC%95%BD-function-calling-conventions)
        - [레지스터 Register Usage](#%EB%A0%88%EC%A7%80%EC%8A%A4%ED%84%B0-register-usage)
        - [주소 모드 Addressing Modes](#%EC%A3%BC%EC%86%8C-%EB%AA%A8%EB%93%9C-addressing-modes)
        - [명령어 세트 Instruction Set](#%EB%AA%85%EB%A0%B9%EC%96%B4-%EC%84%B8%ED%8A%B8-instruction-set)
    - [명령어 구조](#%EB%AA%85%EB%A0%B9%EC%96%B4-%EA%B5%AC%EC%A1%B0)
        - [레이블Label](#%EB%A0%88%EC%9D%B4%EB%B8%94label)
        - [명령어Instruction](#%EB%AA%85%EB%A0%B9%EC%96%B4instruction)
        - [피연산자Operand](#%ED%94%BC%EC%97%B0%EC%82%B0%EC%9E%90operand)
        - [주석Comment](#%EC%A3%BC%EC%84%9Dcomment)
    - [레지스터](#%EB%A0%88%EC%A7%80%EC%8A%A4%ED%84%B0)
        - [범용 레지스터General-Purpose Registers](#%EB%B2%94%EC%9A%A9-%EB%A0%88%EC%A7%80%EC%8A%A4%ED%84%B0general-purpose-registers)
        - [세그먼트 레지스터Segment Registers](#%EC%84%B8%EA%B7%B8%EB%A8%BC%ED%8A%B8-%EB%A0%88%EC%A7%80%EC%8A%A4%ED%84%B0segment-registers)
        - [인스트럭션 포인터Instruction Pointer](#%EC%9D%B8%EC%8A%A4%ED%8A%B8%EB%9F%AD%EC%85%98-%ED%8F%AC%EC%9D%B8%ED%84%B0instruction-pointer)
    - [메모리 접근](#%EB%A9%94%EB%AA%A8%EB%A6%AC-%EC%A0%91%EA%B7%BC)
    - [연산자](#%EC%97%B0%EC%82%B0%EC%9E%90)
        - [산술 연산자](#%EC%82%B0%EC%88%A0-%EC%97%B0%EC%82%B0%EC%9E%90)
        - [논리 연산자](#%EB%85%BC%EB%A6%AC-%EC%97%B0%EC%82%B0%EC%9E%90)
        - [비교 및 점프 연산자](#%EB%B9%84%EA%B5%90-%EB%B0%8F-%EC%A0%90%ED%94%84-%EC%97%B0%EC%82%B0%EC%9E%90)

<!-- /TOC -->

## 어셈블리어 프로그램 구조
- 데이터 섹션 (Data Section)
- 텍스트 섹션 (Text Section)
- 스택 (Stack)
- 힙 (Heap)
- 함수 호출 규약 (Function Calling Conventions)
- 레지스터 (Register Usage)
- 주소 모드 (Addressing Modes)
- 명령어 세트 (Instruction Set)

### 데이터 섹션 (Data Section)
이 섹션은 프로그램에서 사용되는 전역 변수를 선언합니다. 여기에는 초기화된 데이터(`.data`), 초기화되지 않은 데이터(`.bss`), 상수 데이터(`.rodata`) 등이 포함될 수 있습니다.

### 텍스트 섹션 (Text Section)
실제 실행 가능한 코드가 이 섹션에 들어갑니다. 일반적으로 `.text`라고 표시되며, 함수와 명령어가 포함됩니다.

### 스택 (Stack)
함수 호출, 로컬 변수, 함수의 반환 주소 등을 관리하는 데 사용됩니다. x86-64 아키텍처에서는 `%rsp` (스택 포인터 레지스터)를 사용하여 스택을 관리합니다.

### 힙 (Heap)
동적으로 할당되는 메모리 영역입니다. C++에서 new나 malloc을 사용할 때 이 영역에 메모리가 할당됩니다.

### 함수 호출 규약 (Function Calling Conventions)
함수 호출과 반환에서의 레지스터 사용, 인자 전달 방식, 스택 정리 방법 등을 정의합니다. x86-64에서는 System V AMD64 ABI가 일반적인 호출 규약으로 사용됩니다.

### 레지스터 (Register Usage)
x86-64 아키텍처는 여러 범용 레지스터를 가지고 있으며, 이들은 데이터 저장, 연산, 주소 지정 등 다양한 용도로 사용됩니다. 예를 들어, `%rax`, `%rbx`, `%rcx`, `%rdx`, `%rsi`, `%rdi`, `%rbp`, `%rsp` 등이 있습니다.

### 주소 모드 (Addressing Modes)
메모리 주소를 참조하는 방법을 정의합니다. 이는 직접 주소 지정, 레지스터 간접 주소 지정, 기준 레지스터에 상수를 더하는 방식 등이 포함될 수 있습니다.

### 명령어 세트 (Instruction Set)
x86-64 아키텍처는 다양한 명령어를 지원합니다. 이에는 데이터 이동, 산술 연산, 논리 연산, 제어 전송 등이 포함됩니다.

------------------------------------------

## 명령어 구조

```io64.inc
[레이블:] 명령어 [피연산자1, 피연산자2, ...] [; 주석]
```

### 레이블(Label) 
코드의 특정 위치를 가리키는 식별자입니다. 주로 점프 명령에서 사용됩니다.

### 명령어(Instruction)
CPU에게 수행할 작업을 지시합니다. 
예: `mov`, `add`, `sub`, `jmp` 등.

### 피연산자(Operand)
명령어에 의해 수행되는 작업에 필요한 데이터입니다. 
레지스터, 메모리 주소, 상수 값 등이 될 수 있습니다.

### 주석(Comment)
`;` 또는 `#`으로 시작하며, 코드 이해를 돕는 설명을 추가합니다.

## 레지스터
- 레지스터는 CPU 내부에 위치한 매우 빠른 메모리 유닛입니다.
- 데이터를 빠르게 읽고 쓸 수 있어, 계산이나 데이터 처리에 자주 사용됩니다.
- 레지스터의 크기는 제한적이며, 일반적으로 몇 바이트에서 수십 바이트 정도입니다.

### 범용 레지스터(General-Purpose Registers)
데이터 저장 및 연산에 사용됩니다. 
예: `rax`, `rbx`, `rcx`, `rdx`, `rsi`, `rdi`, `rbp`, `rsp`

- `%rbp` 베이스 포인터 : 현재 함수의 스택 프레임 내에서 지역 변수 및 함수 인수에 접근하는 데 사용
- `%rsp` 스택 포인터 : 스택의 맨 위를 가리키는 포인터 역할. 스택에 데이터를 푸시(push)하거나 팝(pop)할 때 사용되며, 스택의 크기를 동적으로 조정하는 데 필요한 역할

### 세그먼트 레지스터(Segment Registers)
메모리 세그먼트를 가리킵니다. 예: `cs`, `ds`, `ss`, `es`.

### 인스트럭션 포인터(Instruction Pointer)
`rip`는 다음에 실행될 명령어의 주소를 가리킵니다.

## 메모리 접근
메모리 주소는 대괄호 [] 안에 표시됩니다. 
예: `mov eax, [ebx]`는 `ebx`가 가리키는 메모리 위치에서 `eax`로 데이터를 이동합니다.

- 메모리는 CPU 외부에 위치한 저장 공간으로, 보통 RAM(Random Access Memory)을 의미합니다.
- 프로그램 데이터, 실행 중인 코드, 스택, 힙 영역 등을 저장합니다.
- 레지스터보다 느리지만 훨씬 큰 저장 용량을 제공합니다.
- 메모리 주소는 주로 레지스터나 상수를 통해 참조됩니다.

## 연산자

### 산술 연산자
`add`, `sub`, `mul`, `div` 등.

### 논리 연산자
`and`, `or`, `xor`, `not` 등.

### 비교 및 점프 연산자
`cmp`, `jmp`, `je`, `jne`, `jg`, `jl` 등.


```c++
int main() {
    return 0;
}
```


```x86-64
main():
    push   %rbp                ; 현재 함수의 베이스 포인터를 스택에 저장
    mov    %rsp, %rbp          ; 스택 포인터를 현재 위치로 설정하여 새로운 스택 프레임 생성
    sub    $0x20, %rsp         ; 32바이트(0x20 바이트)만큼의 로컬 변수 공간 할당
    call   0x7ff6bb0c16b7 <__main> ; __main 함수 호출
    mov    $0x0, %eax          ; 반환 값 0을 %eax 레지스터에 저장
    add    $0x20, %rsp         ; 로컬 변수 공간을 스택에서 해제
    pop    %rbp                ; 이전 함수의 베이스 포인터를 스택에서 복원
    ret                        ; 현재 함수를 반환하고 호출자로 복귀
```