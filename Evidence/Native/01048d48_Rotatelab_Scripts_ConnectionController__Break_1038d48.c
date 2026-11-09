/* IL2CPP: Rotatelab.Scripts.ConnectionController$$Break
void Rotatelab_Scripts_ConnectionController__Break (Rotatelab_Scripts_ConnectionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ConnectionController$$Break
   void Rotatelab_Scripts_ConnectionController__Break (Rotatelab_Scripts_ConnectionController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ConnectionController__Break_1038d48(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  pcVar7 = (char *)(_UNK_01049104 + 0x1048d68);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049108 + 0x1048d7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104910c + 0x1048d88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049110 + 0x1048d94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049114 + 0x1048da0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049118 + 0x1048dac));
    *pcVar7 = '\x01';
  }
  fStack_4c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_48 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_50 = 0.0;
  UnityEngine_Behaviour__set_enabled_35fd7dc(param_1,0,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_parent_36156e4(iVar4,0,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
  pcVar7 = (char *)(_UNK_0104911c + 0x1048e38);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049120 + 0x1048e4c));
    *pcVar7 = '\x01';
  }
  iVar5 = *(int *)(**(int **)(_UNK_01049124 + 0x1048e64) + 0x5c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar4,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),
             *(undefined4 *)(iVar5 + 0x14),0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x24),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_60,iVar5,0);
  fVar3 = fStack_58;
  fVar2 = fStack_5c;
  fVar1 = fStack_60;
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_60,iVar5,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar4,_UNK_01049100 + (fVar1 + fStack_60) * 0.5,(fVar2 + fStack_5c) * 0.5 + 0.5,
             _UNK_01049100 + (fVar3 + fStack_58) * 0.5,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e960(*(int *)(param_1 + 0x20),0);
  piVar10 = *(int **)(_UNK_01049128 + 0x1048fc0);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__ScaleZ_2ce6bc8(&fStack_60,uVar8,0,0x3e99999a,0,0,0,0,0,1,0,0,0,0,0);
  piVar9 = *(int **)(_UNK_0104912c + 0x1049028);
  iVar4 = *piVar9;
  fStack_50 = fStack_60;
  fStack_4c = fStack_5c;
  fStack_48 = fStack_58;
  uStack_44 = uStack_54;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  puVar6 = *(undefined4 **)(iVar4 + 0x5c);
  iVar5 = puVar6[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar8 = *puVar6;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01049130 + 0x1049078));
    System_Action_object____ctor_1f11414(iVar5,uVar8,**(undefined4 **)(_UNK_01049134 + 0x1049098),0)
    ;
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
    *piVar9 = iVar5;
    thunk_FUN_00ec5080(piVar9,iVar5);
  }
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&fStack_60,&fStack_50,param_1,iVar5,0,**(undefined4 **)(_UNK_01049138 + 0x10490dc));
  return;
}

