/* IL2CPP: Rotatelab.Scripts.BlasterController$$CreateJewelHeist
void Rotatelab_Scripts_BlasterController__CreateJewelHeist (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$CreateJewelHeist
   void Rotatelab_Scripts_BlasterController__CreateJewelHeist
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__CreateJewelHeist_1032f74(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  int iVar2;
  undefined4 unaff_r4;
  int *piVar3;
  undefined4 unaff_r5;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01043024 + 0x1042f88);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043028 + 0x1042f9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104302c + 0x1042fa8));
    *pcVar4 = '\x01';
  }
  uVar7 = *(undefined4 *)(param_1 + 0x98);
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  iVar1 = **(int **)(_UNK_01043030 + 0x1042fc0);
  *(undefined1 *)(param_1 + 0xc5) = 1;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar7,uVar5,**(undefined4 **)(_UNK_01043034 + 0x1042fec));
  piVar3 = (int *)(param_1 + 0xa0);
  *piVar3 = iVar1;
  thunk_FUN_00ec5080(piVar3,iVar1);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_01022bf4 + 0x1022b84);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022bf8 + 0x1022b98),0);
    *pcVar4 = '\x01';
  }
  iVar2 = *(int *)(iVar1 + 0x18);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01022bfc + 0x1022bac));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_JewelHeistColorDataSo__GetRandomMaterial_ff5234(iVar1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_035d4aa8 + 0x35d49f8);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4aac + 0x35d4a0c),iVar1,0,extraout_r3,unaff_r4,
                       unaff_r5,unaff_r6,unaff_lr);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4ab0 + 0x35d4a18));
    *pcVar4 = '\x01';
  }
  if (iVar2 != 0) {
    iVar6 = *(int *)(iVar2 + 8);
    if (iVar6 != 0) {
      if (*(int *)(**(int **)(_UNK_035d4ab4 + 0x35d4a50) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d4ab8 + 0x35d4a78);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d4abc + 0x35d4a88);
        *(code **)(_UNK_035d4ac0 + 0x35d4a98) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x035d4aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar6,uVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

