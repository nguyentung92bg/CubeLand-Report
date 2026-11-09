/* IL2CPP: Rotatelab.Scripts.ShieldController$$AnimateHit
void Rotatelab_Scripts_ShieldController__AnimateHit (Rotatelab_Scripts_ShieldController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShieldController$$AnimateHit
   void Rotatelab_Scripts_ShieldController__AnimateHit (Rotatelab_Scripts_ShieldController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShieldController__AnimateHit_104eae0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  
  pcVar6 = (char *)(_UNK_0105ec54 + 0x105eafc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ec58 + 0x105eb10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ec5c + 0x105eb1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ec60 + 0x105eb28));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e960(*(int *)(param_1 + 0x1c),0);
  fVar10 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x2c) + 1,(byte)(in_fpscr >> 0x16) & 3);
  piVar8 = *(int **)(_UNK_0105ec64 + 0x105eb78);
  iVar7 = *(int *)(param_1 + 0x38);
  iVar3 = *piVar8;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + 1.0 / fVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Material__GetFloat_35cb1b4
                    (iVar7,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x70),0);
  piVar8 = (int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  if (*piVar8 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*piVar8,0,0);
    uVar4 = *(undefined4 *)(param_1 + 0x34);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105ec68 + 0x105ebf8));
  DG_Tweening_TweenCallback_float____ctor_1bf9864
            (uVar5,param_1,**(undefined4 **)(_UNK_0105ec6c + 0x105ec18),0);
  uVar4 = DG_Tweening_DOVirtual__Float_11682ec(uVar4,uVar9,0x3e800000,uVar5,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar8 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar8 & 0x1ffff) >> 0xc);
  return;
}

