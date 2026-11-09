/* IL2CPP: Rotatelab.Scripts.ScrewController$$AnimateHit
void Rotatelab_Scripts_ScrewController__AnimateHit (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ScrewController$$AnimateHit
   void Rotatelab_Scripts_ScrewController__AnimateHit (Rotatelab_Scripts_ScrewController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ScrewController__AnimateHit_10501c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  int *piVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  pcVar4 = (char *)(_UNK_01060494 + 0x10601e4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060498 + 0x10601f8));
    *pcVar4 = '\x01';
  }
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fVar6 = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x5c);
  uStack_68 = 0;
  fVar9 = *(float *)(param_1 + 0x44);
  if (fVar6 < *(float *)(param_1 + 0x44)) {
    fVar9 = fVar6;
  }
  *(float *)(param_1 + 0x60) = fVar9;
  PrimeTween_Sequence__Complete_2ceea60((undefined4 *)(param_1 + 0x68),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_78,1,0,1,0,0,0);
  uStack_68 = uStack_78;
  uStack_64 = uStack_74;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  piVar5 = *(int **)(_UNK_0106049c + 0x106028c);
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__LocalPositionY_2ce58fc(&uStack_88,uVar1,uVar7,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Group_2cef730
            (&uStack_88,&uStack_68,uStack_88,uStack_84,uStack_80,uStack_7c,0);
  uStack_68 = uStack_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localEulerAngles_3614ed4(&fStack_94,iVar2,0);
  if (*(char *)(param_1 + 0x78) == '\0') {
    pcVar4 = (char *)(_UNK_010604a0 + 0x1060384);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010604a4 + 0x1060398));
      *pcVar4 = '\x01';
    }
    pfVar3 = *(float **)(**(int **)(_UNK_010604a8 + 0x10603ac) + 0x5c);
    fVar8 = *pfVar3;
    fVar9 = pfVar3[1];
    fVar6 = pfVar3[2];
  }
  else {
    fVar8 = -4.0;
    fVar6 = -2.0;
    fVar9 = _UNK_0106048c;
  }
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__LocalRotation_2ce4354
            (&uStack_78,uVar1,fStack_94 + _UNK_0106048c + fVar8,fStack_90 + _UNK_01060490 + fVar9,
             fStack_8c + _UNK_0106048c + fVar6,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Group_2cef730
            (&uStack_78,&uStack_68,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  *(undefined4 *)(param_1 + 0x68) = uStack_78;
  *(undefined4 *)(param_1 + 0x6c) = uStack_74;
  *(undefined4 *)(param_1 + 0x70) = uStack_70;
  *(undefined4 *)(param_1 + 0x74) = uStack_6c;
  thunk_FUN_00ec5080(param_1 + 0x70,0);
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}

