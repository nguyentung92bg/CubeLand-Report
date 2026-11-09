/* IL2CPP: Rotatelab.Scripts.CameraManager$$Awake
void Rotatelab_Scripts_CameraManager__Awake (Rotatelab_Scripts_CameraManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.CameraManager$$Awake
   void Rotatelab_Scripts_CameraManager__Awake (Rotatelab_Scripts_CameraManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_CameraManager__Awake_ffb554(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  
  pcVar5 = (char *)(_UNK_0100b73c + 0x100b568);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b740 + 0x100b57c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b744 + 0x100b588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b748 + 0x100b594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b74c + 0x100b5a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b750 + 0x100b5ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b754 + 0x100b5b8));
    *pcVar5 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_0100b758 + 0x100b5cc));
  iVar1 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  thunk_FUN_00ec5080();
  puVar9 = *(undefined4 **)(_UNK_0100b75c + 0x100b614);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_0100b760 + 0x100b634);
  iVar1 = *(int *)(iVar1 + 0x1c);
  uVar2 = thunk_FUN_00f00cdc(*puVar7);
  Rotatelab_UI_PointerDragEventListener_PointerEvent___ctor_11107f8
            (uVar2,param_1,**(undefined4 **)(_UNK_0100b764 + 0x100b654),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PointerDragEventListener__add_OnBeginDrag_11103dc(iVar1,uVar2,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  uVar2 = thunk_FUN_00f00cdc(*puVar7);
  Rotatelab_UI_PointerDragEventListener_PointerEvent___ctor_11107f8
            (uVar2,param_1,**(undefined4 **)(_UNK_0100b768 + 0x100b6b4),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PointerDragEventListener__add_OnDrag_111051c(iVar1,uVar2,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  uVar2 = thunk_FUN_00f00cdc(*puVar7);
  Rotatelab_UI_PointerDragEventListener_PointerEvent___ctor_11107f8
            (uVar2,param_1,**(undefined4 **)(_UNK_0100b76c + 0x100b714),0);
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_011206f0 + 0x1120674);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011206f4 + 0x1120688),uVar2,0);
      *pcVar5 = '\x01';
    }
    piVar6 = (int *)(iVar1 + 0x18);
    piVar10 = *(int **)(_UNK_011206f8 + 0x11206a0);
    iVar1 = *piVar6;
    while( true ) {
      piVar3 = (int *)System_Delegate__Combine_2bbca94(iVar1,uVar2,0);
      piVar8 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && (piVar8 = piVar3, *piVar3 != *piVar10)) break;
      iVar4 = FUN_00efd180(piVar6,piVar8,iVar1);
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

