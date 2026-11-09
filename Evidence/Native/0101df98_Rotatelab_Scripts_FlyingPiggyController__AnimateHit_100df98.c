/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$AnimateHit
void Rotatelab_Scripts_FlyingPiggyController__AnimateHit (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$AnimateHit
   void Rotatelab_Scripts_FlyingPiggyController__AnimateHit
   (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController__AnimateHit_100df98(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar5 = (char *)(_UNK_0101e0ac + 0x101dfb4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e0b0 + 0x101dfc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e0b4 + 0x101dfd4));
    *pcVar5 = '\x01';
  }
  *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x84);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_SkinnedMeshRenderer__GetBlendShapeWeight_35ce4bc(*(int *)(param_1 + 0x3c),0,0)
  ;
  piVar6 = (int *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  if (*piVar6 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*piVar6,0,0);
    uVar3 = *(undefined4 *)(param_1 + 0x80);
  }
  uVar8 = *(undefined4 *)(param_1 + 0x44);
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101e0b8 + 0x101e04c));
  DG_Tweening_TweenCallback_float____ctor_1bf9864
            (uVar4,param_1,**(undefined4 **)(_UNK_0101e0bc + 0x101e070),0);
  uVar3 = DG_Tweening_DOVirtual__Float_11682ec(uVar3,uVar7,uVar8,uVar4,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar6 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
  return;
}

