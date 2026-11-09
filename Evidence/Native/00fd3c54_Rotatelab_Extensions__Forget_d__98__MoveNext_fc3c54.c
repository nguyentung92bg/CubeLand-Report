/* IL2CPP: Rotatelab.Extensions.<Forget>d__98$$MoveNext
void Rotatelab_Extensions__Forget_d__98__MoveNext (Rotatelab_Extensions__Forget_d__98_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions.<Forget>d__98$$MoveNext
   void Rotatelab_Extensions__Forget_d__98__MoveNext (Rotatelab_Extensions__Forget_d__98_o __this,
   const MethodInfo* method); */

void Rotatelab_Extensions__Forget_d__98__MoveNext_fc3c54(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_00fd3ed8 + 0xfd3c6c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd3edc + 0xfd3c80));
    *pcVar2 = '\x01';
  }
  iStack_14 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_14 = param_1[7];
    param_1[7] = 0;
  }
  else {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_14 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(param_1[5],0);
    iVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&iStack_14,0);
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[7] = iStack_14;
      thunk_FUN_00ec5080(param_1 + 7,0);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__Extensions__Forget_d__98__13ed540
                (param_1 + 1,&iStack_14,param_1,**(undefined4 **)(_UNK_00fd3ee0 + 0xfd3cfc));
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&iStack_14,0);
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult_2a93c64(param_1 + 1,0);
  return;
}

