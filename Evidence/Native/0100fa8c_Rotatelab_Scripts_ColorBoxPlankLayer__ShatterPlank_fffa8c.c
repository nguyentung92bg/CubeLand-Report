/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$ShatterPlank
void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterPlank (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, UnityEngine_Transform_o* plank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$ShatterPlank
   void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterPlank (Rotatelab_Scripts_ColorBoxPlankLayer_o*
   __this, UnityEngine_Transform_o* plank, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterPlank_fffa8c(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_88;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  pcVar8 = (char *)(_UNK_0100fff0 + 0x100fab0);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100fff4 + 0x100fac4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100fff8 + 0x100fad0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100fffc + 0x100fadc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010000 + 0x100fae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010004 + 0x100faf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010008 + 0x100fb00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101000c + 0x100fb0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010010 + 0x100fb18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010014 + 0x100fb24));
    *pcVar8 = '\x01';
  }
  fStack_4c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_48 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_50 = 0.0;
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01010018 + 0x100fb40));
  System_Object___ctor_2bb93bc(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar4 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar4 + 8),param_1);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_78,param_2,0);
  uStack_88 = CONCAT44(fStack_74,fStack_78);
  fStack_80 = fStack_70;
  *(float *)(iVar4 + 0x14) = fStack_70;
  *(undefined8 *)(iVar4 + 0xc) = uStack_88;
  UnityEngine_Transform__get_rotation_3614cfc(&fStack_78,param_2,0);
  *(float *)(iVar4 + 0x18) = fStack_78;
  *(float *)(iVar4 + 0x1c) = fStack_74;
  *(float *)(iVar4 + 0x20) = fStack_70;
  *(undefined4 *)(iVar4 + 0x24) = uStack_6c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_lossyScale_3617374(&fStack_60,param_2,0);
  puVar5 = *(undefined4 **)(_UNK_0101001c + 0x100fc24);
  *(float *)(iVar4 + 0x28) = fStack_60;
  uVar6 = thunk_FUN_00f00cdc(*puVar5);
  System_Action___ctor_2b10bac(uVar6,iVar4,**(undefined4 **)(_UNK_01010020 + 0x100fc44),0);
  piVar12 = *(int **)(_UNK_01010024 + 0x100fc58);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2cea14c(&fStack_60,param_1,0x3e6147ae,uVar6,0,0,0);
  if (*(char *)(param_1 + 0x3c) != '\0') {
    fVar7 = (float)UnityEngine_Time__get_unscaledTime_3610a3c(0);
    if (_UNK_0100ffe8 <= fVar7 - *(float *)(param_1 + 0x38)) {
      uVar6 = UnityEngine_Time__get_unscaledTime_3610a3c(0);
      puVar5 = *(undefined4 **)(_UNK_01010028 + 0x100fcd4);
      *(undefined4 *)(param_1 + 0x38) = uVar6;
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,0x22,0);
    }
  }
  PrimeTween_Sequence__Create_2cef1e0(&fStack_60,1,0,1,0,0,0);
  fStack_50 = fStack_60;
  fStack_4c = (float)uStack_5c;
  fStack_48 = (float)uStack_58;
  uStack_44 = uStack_54;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_78,param_2,0);
  fVar13 = fStack_70;
  fVar14 = fStack_74;
  fVar7 = fStack_78;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_78,5,0);
  uVar10 = uStack_68;
  uVar6 = uStack_6c;
  fVar3 = fStack_70;
  fVar2 = fStack_74;
  fVar1 = fStack_78;
  fVar13 = fVar13 * _UNK_0100ffec;
  fVar14 = fVar14 * _UNK_0100ffec;
  fVar7 = fVar7 * _UNK_0100ffec;
  if (*(int *)(*piVar12 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce6560
            (&fStack_78,param_2,fVar7,fVar14,fVar13,0x3df5c28f,fVar1,fVar2,fVar3,uVar6,uVar10,1,0,0,
             0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_88,&fStack_50,fStack_78,fStack_74,fStack_70,uStack_6c,0);
  pcVar8 = (char *)(_UNK_0101002c + 0x100fe38);
  fStack_50 = (float)uStack_88;
  fStack_4c = (float)uStack_88._4_4_;
  fStack_48 = fStack_80;
  uStack_44 = uStack_7c;
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010030 + 0x100fe50));
    *pcVar8 = '\x01';
  }
  puVar5 = *(undefined4 **)(**(int **)(_UNK_01010034 + 0x100fe6c) + 0x5c);
  uVar11 = *puVar5;
  uVar10 = puVar5[1];
  uVar6 = puVar5[2];
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_78,6,0);
  PrimeTween_Tween__Scale_2ce6560
            (&fStack_78,param_2,uVar11,uVar10,uVar6,0x3e99999a,fStack_78,fStack_74,fStack_70,
             uStack_6c,uStack_68,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_78,&fStack_50,fStack_78,fStack_74,fStack_70,uStack_6c,0);
  fStack_50 = fStack_78;
  fStack_4c = fStack_74;
  fStack_48 = fStack_70;
  uStack_44 = uStack_6c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  piVar12 = *(int **)(_UNK_01010038 + 0x100ff1c);
  iVar4 = *piVar12;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar12;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar9 = puVar5[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar12 + 0x5c);
    }
    uVar10 = *puVar5;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101003c + 0x100ff64));
    System_Action_object____ctor_1f11414
              (iVar9,uVar10,**(undefined4 **)(_UNK_01010040 + 0x100ff84),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
    *piVar12 = iVar9;
    thunk_FUN_00ec5080(piVar12,iVar9);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&fStack_78,&fStack_50,uVar6,iVar9,0,**(undefined4 **)(_UNK_01010044 + 0x100ffb4));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

