/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$Initialize
void Rotatelab_Ads_MainThreadDispatcher__Initialize (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$Initialize
   void Rotatelab_Ads_MainThreadDispatcher__Initialize (const MethodInfo* method); */

void Rotatelab_Ads_MainThreadDispatcher__Initialize_10f8b10(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_01108c70 + 0x1108b20);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108c74 + 0x1108b34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108c78 + 0x1108b40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108c7c + 0x1108b4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108c80 + 0x1108b58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108c84 + 0x1108b64));
    *pcVar4 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_01108c88 + 0x1108b7c),1);
  uVar5 = **(undefined4 **)(_UNK_01108c90 + 0x1108b9c);
  if (*(int *)(*(int *)(*(int *)(_UNK_01108c8c + 0x1108b90) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = System_Type__GetTypeFromHandle_2b80928(uVar5,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if (piVar1[3] != 0) {
    piVar1[4] = iVar2;
    thunk_FUN_00ec5080(piVar1 + 4,iVar2);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01108c94 + 0x1108c20));
    UnityEngine_GameObject___ctor_3602844
              (iVar2,**(undefined4 **)(_UNK_01108c98 + 0x1108c3c),piVar1,0);
    if (*(int *)(**(int **)(_UNK_01108c9c + 0x1108c50) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar4 = (char *)(_UNK_03619cd8 + 0x3619c30);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619cdc + 0x3619c44),0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619ce0 + 0x3619c50));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619ce4 + 0x3619c5c));
      *pcVar4 = '\x01';
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    if (iVar2 == 0 || iVar3 == 0) {
      UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_35f9694
                (*(undefined4 **)(_UNK_03619cf8 + 0x3619c80),
                 **(undefined4 **)(_UNK_03619cf8 + 0x3619c80));
    }
    if (*(int *)(**(int **)(_UNK_03619ce8 + 0x3619c90) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_03619cec + 0x3619cac);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03619cf0 + 0x3619cbc);
      *(code **)(_UNK_03619cf4 + 0x3619ccc) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x03619cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

