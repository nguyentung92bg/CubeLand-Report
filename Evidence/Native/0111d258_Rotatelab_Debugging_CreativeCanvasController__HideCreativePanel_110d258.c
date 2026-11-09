/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$HideCreativePanel
void Rotatelab_Debugging_CreativeCanvasController__HideCreativePanel (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$HideCreativePanel
   void Rotatelab_Debugging_CreativeCanvasController__HideCreativePanel
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__HideCreativePanel_110d258(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0111d4c4 + 0x111d270);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d4c8 + 0x111d284));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d4cc + 0x111d290));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d4d0 + 0x111d29c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d4d4 + 0x111d2a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d4d8 + 0x111d2b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d4dc + 0x111d2c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d4e0 + 0x111d2cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d4e4 + 0x111d2d8));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111d4e8 + 0x111d2f4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) != 0) {
    piVar4 = *(int **)(_UNK_0111d4ec + 0x111d334);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x148);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,**(undefined4 **)(_UNK_0111d4f0 + 0x111d36c));
  }
  piVar4 = *(int **)(_UNK_0111d4f4 + 0x111d380);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__ScaleX_2ce6950(&uStack_40,uVar5,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  piVar8 = *(int **)(_UNK_0111d4f8 + 0x111d3f0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *piVar8;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111d4fc + 0x111d444));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_0111d500 + 0x111d464),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_40,&uStack_30,uVar5,iVar6,0,**(undefined4 **)(_UNK_0111d504 + 0x111d4a8));
  return;
}

