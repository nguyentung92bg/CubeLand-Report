/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$StopHitSoundLoop
void Rotatelab_Scripts_ShrinkingCoverController__StopHitSoundLoop (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$StopHitSoundLoop
   void Rotatelab_Scripts_ShrinkingCoverController__StopHitSoundLoop
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__StopHitSoundLoop_1052014(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 200);
  if (*piVar3 == 0) {
    return;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar3,0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

