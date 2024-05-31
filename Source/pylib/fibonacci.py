def fibonacci(n):
    """
    매개변수로 들어온 n값 미만의 피보나치 수열을 출력하는 함수
    ex. 인수(매개변수)로 10 : 0, 1, 1, 2, 3, 5, 8  (13은 10이상이니까 출력X)
    ex. 인수로 5 : 0. 1. 1. 2. 3. 5
    """
    a,b = 0,1   #이렇게 선언하면 내부적으로 (a,b) (0,1) 튜플이 됨
    while a<n:
        print(a, end=". ")
        a,b = b,a+b
    print() #개행
if __name__ == '__main__':
    fibonacci(100)   #피보나치 라이브러리로 만들었을떄, 이 라인을 라이브러리를 실행할떄는 작동, import 해서 가져다 쓸때는 실행 안되게 하려면 이렇게 __main__ 이용
    print(__name__,"에서 테스트")