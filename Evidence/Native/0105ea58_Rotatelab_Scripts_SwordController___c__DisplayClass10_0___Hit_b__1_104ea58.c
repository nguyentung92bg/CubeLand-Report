/* IL2CPP: Rotatelab.Scripts.SwordController.<>c__DisplayClass10_0$$<Hit>b__1
void Rotatelab_Scripts_SwordController___c__DisplayClass10_0___Hit_b__1 (Rotatelab_Scripts_SwordController___c__DisplayClass10_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SwordController.<>c__DisplayClass10_0$$<Hit>b__1
   void Rotatelab_Scripts_SwordController___c__DisplayClass10_0___Hit_b__1
   (Rotatelab_Scripts_SwordController___c__DisplayClass10_0_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_SwordController___c__DisplayClass10_0___Hit_b__1_104ea58(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint in_fpscr;
  float fVar11;
  
  pcVar7 = (char *)(_UNK_0105ead4 + 0x105ea6c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ead8 + 0x105ea80));
    *pcVar7 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105eadc + 0x105ea94));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,0x1e,0);
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0105ec54 + 0x105eafc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ec58 + 0x105eb10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ec5c + 0x105eb1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ec60 + 0x105eb28));
    *pcVar7 = '\x01';
  }
  if (*(int *)(iVar3 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e960(*(int *)(iVar3 + 0x1c),0);
  fVar11 = (float)VectorSignedToFloat(*(int *)(iVar3 + 0x2c) + 1,(byte)(in_fpscr >> 0x16) & 3);
  piVar9 = *(int **)(_UNK_0105ec64 + 0x105eb78);
  iVar8 = *(int *)(iVar3 + 0x38);
  iVar4 = *piVar9;
  *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) + 1.0 / fVar11;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = UnityEngine_Material__GetFloat_35cb1b4
                    (iVar8,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x70),0);
  piVar9 = (int *)(iVar3 + 0x3c);
  *(undefined4 *)(iVar3 + 0x34) = uVar5;
  if (*piVar9 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*piVar9,0,0);
    uVar5 = *(undefined4 *)(iVar3 + 0x34);
  }
  uVar10 = *(undefined4 *)(iVar3 + 0x30);
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105ec68 + 0x105ebf8));
  DG_Tweening_TweenCallback_float____ctor_1bf9864
            (uVar6,iVar3,**(undefined4 **)(_UNK_0105ec6c + 0x105ec18),0);
  uVar5 = DG_Tweening_DOVirtual__Float_11682ec(uVar5,uVar10,0x3e800000,uVar6,0);
  *(undefined4 *)(iVar3 + 0x3c) = uVar5;
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar9 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar9 & 0x1ffff) >> 0xc);
  return;
}

