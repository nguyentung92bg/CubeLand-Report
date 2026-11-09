/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$IsOffGridTargetableVisible
bool Rotatelab_Grid_GridVisibilityController__IsOffGridTargetableVisible (Rotatelab_Grid_GridVisibilityController_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$IsOffGridTargetableVisible
   bool Rotatelab_Grid_GridVisibilityController__IsOffGridTargetableVisible
   (Rotatelab_Grid_GridVisibilityController_o* __this, UnityEngine_Camera_o* camera, const
   MethodInfo* method); */

uint Rotatelab_Grid_GridVisibilityController__IsOffGridTargetableVisible_1109d3c
               (int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float extraout_s2;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_2c = 0;
  uStack_48 = 0;
  uStack_54 = uStack_64;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_3c = uStack_64;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x60),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = 0;
  UnityEngine_Transform__get_position_36149b0(&fStack_74,iVar5,0);
  fVar4 = fStack_6c;
  fVar3 = fStack_70;
  fVar2 = fStack_74;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__WorldToViewportPoint_35aea38
            (&fStack_74,param_2,fStack_74,fStack_70,fStack_6c,0);
  fVar1 = extraout_s2;
  if (0.0 <= fStack_6c) {
    fVar1 = fStack_74;
  }
  if ((((0.0 <= fStack_6c && 0.0 <= fStack_74) && (fVar1 <= 1.0)) && (0.0 <= fStack_70)) &&
     (fStack_70 <= 1.0)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_transform_35fe190(param_2,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_forward_36152b0(&fStack_74,iVar5,0);
    func_0x01133954(&uStack_40,fVar2,fVar3,fVar4,-fStack_74,-fStack_70,-fStack_6c,0);
    uVar6 = Rotatelab_Grid_GridVisibilityController__Raycast_1107af8
                      (param_1,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,
                       &uStack_68,0);
    uVar6 = uVar6 ^ 1;
  }
  return uVar6;
}

