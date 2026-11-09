/* IL2CPP: Rotatelab.UI.ProfileManager$$<OnMainCanvasChangeEndedHandler>b__25_0
void Rotatelab_UI_ProfileManager___OnMainCanvasChangeEndedHandler_b__25_0 (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$<OnMainCanvasChangeEndedHandler>b__25_0
   void Rotatelab_UI_ProfileManager___OnMainCanvasChangeEndedHandler_b__25_0
   (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method); */

void Rotatelab_UI_ProfileManager___OnMainCanvasChangeEndedHandler_b__25_0_1114dd4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r1;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined1 *)(iVar1 + 0xb8) = 1;
  pcVar3 = (char *)(_UNK_01124be4 + 0x1124994);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124be8 + 0x11249a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124bec + 0x11249b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124bf0 + 0x11249c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124bf4 + 0x11249cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124bf8 + 0x11249d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124bfc + 0x11249e4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_50,&uStack_30,0x3f800000,0);
  piVar7 = *(int **)(_UNK_01124c00 + 0x1124a4c);
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  iVar1 = *piVar7;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar2[3];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01124c04 + 0x1124aa0));
    System_Action_object____ctor_1f11414(iVar4,uVar5,**(undefined4 **)(_UNK_01124c08 + 0x1124ac0),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0xc);
    *piVar7 = iVar4;
    thunk_FUN_00ec5080(piVar7,iVar4);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_40,&uStack_30,uVar6,iVar4,0,**(undefined4 **)(_UNK_01124c0c + 0x1124af4));
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  if (*(int *)(**(int **)(_UNK_01124c10 + 0x1124b14) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7dbc(&uStack_50,uVar6,0,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_50,&uStack_30,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  iVar1 = *(int *)(**(int **)(_UNK_01124c14 + 0x1124bac) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_50,iVar1,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  return;
}

