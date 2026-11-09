/* IL2CPP: Rotatelab.MetaProgressionController$$OnEnable
void Rotatelab_MetaProgressionController__OnEnable (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$OnEnable
   void Rotatelab_MetaProgressionController__OnEnable (Rotatelab_MetaProgressionController_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__OnEnable_fbbf38(int param_1)

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
  
  pcVar5 = (char *)(_UNK_00fcc1cc + 0xfcbf4c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1d0 + 0xfcbf60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1d4 + 0xfcbf6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1d8 + 0xfcbf78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1dc + 0xfcbf84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1e0 + 0xfcbf90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1e4 + 0xfcbf9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1e8 + 0xfcbfa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1ec + 0xfcbfb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1f0 + 0xfcbfc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1f4 + 0xfcbfcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1f8 + 0xfcbfd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc1fc + 0xfcbfe4));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_00fcc200 + 0xfcbff8);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x74);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcc204 + 0xfcc01c));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_00fcc208 + 0xfcc03c),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x74) = uVar2;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcc20c + 0xfcc07c));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar2,param_1,**(undefined4 **)(_UNK_00fcc210 + 0xfcc09c),0);
  uVar2 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar6,uVar2,**(undefined4 **)(_UNK_00fcc214 + 0xfcc0b4));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar2;
  thunk_FUN_00ec5080();
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fcc218 + 0xfcc0dc));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcc21c + 0xfcc0f0));
  System_Action_Int32Enum____ctor_1f10670
            (uVar2,param_1,**(undefined4 **)(_UNK_00fcc220 + 0xfcc10c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIManager__add_OnPageOpened_1127194(iVar1,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x30);
  puVar8 = *(undefined4 **)(_UNK_00fcc224 + 0xfcc140);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
            (uVar2,param_1,**(undefined4 **)(_UNK_00fcc228 + 0xfcc15c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PointerPressEventListener__add_OnPointerClick_1110bbc(iVar1,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x34);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
            (uVar2,param_1,**(undefined4 **)(_UNK_00fcc22c + 0xfcc1a4),0);
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_01120c50 + 0x1120bd4);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01120c54 + 0x1120be8),uVar2,0);
      *pcVar5 = '\x01';
    }
    piVar7 = (int *)(iVar1 + 0x18);
    piVar10 = *(int **)(_UNK_01120c58 + 0x1120c00);
    iVar1 = *piVar7;
    while( true ) {
      piVar3 = (int *)System_Delegate__Combine_2bbca94(iVar1,uVar2,0);
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

