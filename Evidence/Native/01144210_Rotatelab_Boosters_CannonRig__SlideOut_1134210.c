/* IL2CPP: Rotatelab.Boosters.CannonRig$$SlideOut
void Rotatelab_Boosters_CannonRig__SlideOut (Rotatelab_Boosters_CannonRig_o* __this, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$SlideOut
   void Rotatelab_Boosters_CannonRig__SlideOut (Rotatelab_Boosters_CannonRig_o* __this,
   System_Action_o* onComplete, const MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__SlideOut_1134210(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_011444a4 + 0x114422c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011444a8 + 0x1144240));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011444ac + 0x114424c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011444b0 + 0x1144258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011444b4 + 0x1144264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011444b8 + 0x1144270));
    *pcVar5 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x90),0);
  if (*(int *)(**(int **)(_UNK_011444bc + 0x11442ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(param_1 + 0x50,0);
  puVar1 = (undefined4 *)(param_1 + 0x70);
  PrimeTween_Sequence__Stop_2cf07bc(puVar1,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar10 = *(undefined4 *)(param_1 + 0x30);
  uVar11 = *(undefined4 *)(param_1 + 0x34);
  uVar9 = *(undefined4 *)(param_1 + 0x44);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1a,0);
  PrimeTween_Tween__LocalPosition_2ce550c
            (&uStack_60,uVar2,uVar7,uVar10,uVar11,uVar9,uStack_60,uStack_5c,uStack_58,uStack_54,
             uStack_50,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  piVar6 = *(int **)(_UNK_011444c0 + 0x11443ac);
  iVar3 = *piVar6;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  puVar4 = *(undefined4 **)(iVar3 + 0x5c);
  iVar8 = puVar4[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar2 = *puVar4;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011444c4 + 0x11443fc));
    System_Action_object____ctor_1f11414(iVar8,uVar2,**(undefined4 **)(_UNK_011444c8 + 0x114441c),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar8;
    thunk_FUN_00ec5080(piVar6,iVar8);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_60,&uStack_38,param_1,iVar8,0,**(undefined4 **)(_UNK_011444cc + 0x1144450));
  *puVar1 = uStack_60;
  *(undefined4 *)(param_1 + 0x74) = uStack_5c;
  *(undefined4 *)(param_1 + 0x78) = uStack_58;
  *(undefined4 *)(param_1 + 0x7c) = uStack_54;
  thunk_FUN_00ec5080(param_1 + 0x78,0);
  if (param_2 != 0) {
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_60,puVar1,param_2,0,0);
  }
  return;
}

