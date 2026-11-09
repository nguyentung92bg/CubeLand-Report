/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass67_0$$<AuthenticateNakamaAsync>b__1
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__1 (Rotatelab_Networking_HiroController___c__DisplayClass67_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass67_0$$<AuthenticateNakamaAsync>b__1
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__1
   (Rotatelab_Networking_HiroController___c__DisplayClass67_0_o* __this, const MethodInfo* method);
    */

void Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__1_114f1e8
               (undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar1 = (char *)(_UNK_0115f280 + 0x115f204);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f284 + 0x115f218));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_HiroController__TryAuthenticateWithSilentSignInAsync_114aecc
            (&uStack_28,*(int *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 0x10));
  Cysharp_Threading_Tasks_UniTask_object___op_Implicit_1c5d408
            (&uStack_28,uStack_28,uStack_24,uStack_20,**(undefined4 **)(_UNK_0115f288 + 0x115f260));
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

