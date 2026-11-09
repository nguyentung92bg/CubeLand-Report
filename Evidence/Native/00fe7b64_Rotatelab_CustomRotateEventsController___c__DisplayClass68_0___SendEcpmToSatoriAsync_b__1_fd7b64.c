/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c__DisplayClass68_0$$<SendEcpmToSatoriAsync>b__1
Cysharp_Threading_Tasks_UniTask_o Rotatelab_CustomRotateEventsController___c__DisplayClass68_0___SendEcpmToSatoriAsync_b__1 (Rotatelab_CustomRotateEventsController___c__DisplayClass68_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c__DisplayClass68_0$$<SendEcpmToSatoriAsync>b__1
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_CustomRotateEventsController___c__DisplayClass68_0___SendEcpmToSatoriAsync_b__1
   (Rotatelab_CustomRotateEventsController___c__DisplayClass68_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_CustomRotateEventsController___c__DisplayClass68_0___SendEcpmToSatoriAsync_b__1_fd7b64
               (undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_00fe7c18 + 0xfe7b80);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7c1c + 0xfe7b94));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fe7c20 + 0xfe7ba8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Hiro_SatoriSystem__UpdatePropertiesAsync_296c690
                    (*(int *)(iVar1 + 0x24),0,*(undefined4 *)(param_2 + 8),1,0,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__AsUniTask_321dc9c(&uStack_18,uVar2,1,0);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}

