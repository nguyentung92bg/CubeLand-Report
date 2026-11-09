/* IL2CPP: Rotatelab.MetaProgressionController$$OnDisable
void Rotatelab_MetaProgressionController__OnDisable (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$OnDisable
   void Rotatelab_MetaProgressionController__OnDisable (Rotatelab_MetaProgressionController_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__OnDisable_fbc230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  
  pcVar5 = (char *)(_UNK_00fcc4c4 + 0xfcc244);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4c8 + 0xfcc258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4cc + 0xfcc264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4d0 + 0xfcc270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4d4 + 0xfcc27c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4d8 + 0xfcc288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4dc + 0xfcc294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4e0 + 0xfcc2a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4e4 + 0xfcc2ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4e8 + 0xfcc2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4ec + 0xfcc2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4f0 + 0xfcc2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc4f4 + 0xfcc2dc));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_00fcc4f8 + 0xfcc2f0);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x74);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcc4fc + 0xfcc314));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_00fcc500 + 0xfcc334),0);
  uVar2 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x74) = uVar2;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcc504 + 0xfcc374));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar2,param_1,**(undefined4 **)(_UNK_00fcc508 + 0xfcc394),0);
  uVar2 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar6,uVar2,**(undefined4 **)(_UNK_00fcc50c + 0xfcc3ac));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar2;
  thunk_FUN_00ec5080();
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fcc510 + 0xfcc3d4));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcc514 + 0xfcc3e8));
  System_Action_Int32Enum____ctor_1f10670
            (uVar2,param_1,**(undefined4 **)(_UNK_00fcc518 + 0xfcc404),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIManager__remove_OnPageOpened_1127244(iVar1,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x30);
  puVar8 = *(undefined4 **)(_UNK_00fcc51c + 0xfcc438);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
            (uVar2,param_1,**(undefined4 **)(_UNK_00fcc520 + 0xfcc454),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PointerPressEventListener__remove_OnPointerClick_1110c5c(iVar1,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x34);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
            (uVar2,param_1,**(undefined4 **)(_UNK_00fcc524 + 0xfcc49c),0);
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_01120cf0 + 0x1120c74);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01120cf4 + 0x1120c88),uVar2,0);
      *pcVar5 = '\x01';
    }
    piVar7 = (int *)(iVar1 + 0x18);
    piVar10 = *(int **)(_UNK_01120cf8 + 0x1120ca0);
    iVar1 = *piVar7;
    while( true ) {
      piVar3 = (int *)System_Delegate__Remove_2bbcc8c(iVar1,uVar2,0);
      piVar9 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && (piVar9 = piVar3, *piVar3 != *piVar10)) break;
      iVar4 = FUN_00efd180(piVar7,piVar9,iVar1);
      bVar11 = iVar4 == iVar1;
      iVar1 = iVar4;
      if (bVar11) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

