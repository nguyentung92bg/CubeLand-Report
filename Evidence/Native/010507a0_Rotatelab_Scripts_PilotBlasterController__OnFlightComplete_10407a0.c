/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$OnFlightComplete
void Rotatelab_Scripts_PilotBlasterController__OnFlightComplete (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$OnFlightComplete
   void Rotatelab_Scripts_PilotBlasterController__OnFlightComplete
   (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__OnFlightComplete_10407a0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  float fVar10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar8 = (char *)(_UNK_01050a08 + 0x10507c0);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050a0c + 0x10507d4));
    *pcVar8 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  if (*(char *)((int)param_1 + 0xc1) == '\0') {
    Rotatelab_Scripts_BlasterController__OnPlacedToDock_1036408(param_1,0);
    (**(code **)(*param_1 + 0x150))(param_1,6,*(undefined4 *)(*param_1 + 0x154));
    (**(code **)(*param_1 + 0x148))(param_1,*(undefined4 *)(*param_1 + 0x14c));
    iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_localPosition_3613b6c(&iStack_78,iVar5,0);
    fVar1 = fStack_74;
    fVar10 = (float)param_1[0x5f];
    PrimeTween_Sequence__Stop_2cf07bc(param_1 + 0x68,0);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_60,0xffffffff,0,1,0,0,0);
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    iVar9 = param_1[0x60];
    PrimeTween_Easing__op_Implicit_2ce2e54(&iStack_78,4,0);
    uVar7 = uStack_68;
    iVar4 = iStack_6c;
    iVar3 = iStack_70;
    fVar2 = fStack_74;
    iVar5 = iStack_78;
    if (*(int *)(**(int **)(_UNK_01050a10 + 0x10508d8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPositionY_2ce58fc
              (&iStack_78,uVar6,fVar1 + fVar10,iVar9,iVar5,fVar2,iVar3,iVar4,uVar7,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_88,&uStack_50,iStack_78,fStack_74,iStack_70,iStack_6c,0);
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    uStack_48 = uStack_80;
    uStack_44 = uStack_7c;
    uVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    iVar5 = param_1[0x61];
    PrimeTween_Easing__op_Implicit_2ce2e54(&iStack_78,4,0);
    PrimeTween_Tween__LocalPositionY_2ce58fc
              (&iStack_78,uVar7,fVar1,iVar5,iStack_78,fStack_74,iStack_70,iStack_6c,uStack_68,1,0,0,
               0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&iStack_78,&uStack_50,iStack_78,fStack_74,iStack_70,iStack_6c,0);
    param_1[0x68] = iStack_78;
    param_1[0x69] = (int)fStack_74;
    param_1[0x6a] = iStack_70;
    param_1[0x6b] = iStack_6c;
    thunk_FUN_00ec5080(param_1 + 0x6a,0);
  }
  return;
}

