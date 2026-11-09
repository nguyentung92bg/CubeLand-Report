/* IL2CPP: Rotatelab.Scripts.ShieldController$$Destroy
void Rotatelab_Scripts_ShieldController__Destroy (Rotatelab_Scripts_ShieldController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShieldController$$Destroy
   void Rotatelab_Scripts_ShieldController__Destroy (Rotatelab_Scripts_ShieldController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ShieldController__Destroy_104ec9c(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  pcVar6 = (char *)(_UNK_0105f00c + 0x105ecb8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f010 + 0x105eccc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f014 + 0x105ecd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f018 + 0x105ece4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f01c + 0x105ecf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f020 + 0x105ecfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f024 + 0x105ed08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f028 + 0x105ed14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f02c + 0x105ed20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f030 + 0x105ed2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f034 + 0x105ed38));
    *pcVar6 = '\x01';
  }
  fStack_3c = 0.0;
  if (*(int *)(**(int **)(_UNK_0105f038 + 0x105ed50) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_48,iVar4,0);
  pcVar6 = (char *)(_UNK_0105f03c + 0x105edc0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f040 + 0x105eddc));
    *pcVar6 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_0105f044 + 0x105edf0) + 0x5c);
  uVar3 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                    (uVar3,fStack_48 + *(float *)(iVar4 + 0xc),fStack_44 + *(float *)(iVar4 + 0x10),
                     fStack_40 + *(float *)(iVar4 + 0x14),*(undefined4 *)(param_1 + 0x28),0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar3,0xf,**(undefined4 **)(_UNK_0105f048 + 0x105ee34));
  uVar2 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar2,uVar3,0);
  piVar8 = *(int **)(_UNK_0105f04c + 0x105ee5c);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar8;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar7 = puVar5[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar3 = *puVar5;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105f050 + 0x105eea4));
    DG_Tweening_TweenCallback___ctor_11657e8
              (iVar7,uVar3,**(undefined4 **)(_UNK_0105f054 + 0x105eec4),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar7;
    thunk_FUN_00ec5080(piVar8,iVar7);
  }
  uVar2 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar2,iVar7,0);
  if (*(int *)(**(int **)(_UNK_0105f058 + 0x105ef00) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Extensions__Duration_object__14867e0
                    (uVar2,&fStack_3c,1,**(undefined4 **)(_UNK_0105f05c + 0x105ef24));
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar3 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar3,0,*(undefined4 *)(param_1 + 0x24),0)
  ;
  uVar2 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar2,uVar3,0);
  puVar5 = *(undefined4 **)(_UNK_0105f060 + 0x105ef6c);
  uVar3 = thunk_FUN_00f00cdc(*puVar5);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar3,param_1,**(undefined4 **)(_UNK_0105f064 + 0x105ef88),0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar2,uVar3,0);
  fVar1 = fStack_3c;
  uVar3 = thunk_FUN_00f00cdc(*puVar5);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar3,param_1,**(undefined4 **)(_UNK_0105f068 + 0x105efc8),0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__InsertCallback_116d148
                    (uVar2,fVar1 + _UNK_0105f008,uVar3,0);
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_object__1490074
            (uVar2,**(undefined4 **)(_UNK_0105f06c + 0x105eff8));
  return;
}

