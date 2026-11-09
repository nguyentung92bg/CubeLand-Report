/* IL2CPP: Rotatelab.Boosters.BounceBoosterController$$OnActivated
void Rotatelab_Boosters_BounceBoosterController__OnActivated (Rotatelab_Boosters_BounceBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BounceBoosterController$$OnActivated
   void Rotatelab_Boosters_BounceBoosterController__OnActivated
   (Rotatelab_Boosters_BounceBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BounceBoosterController__OnActivated_1132b80(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  Rotatelab_Boosters_BaseBoosterController__OnActivated_1132370();
  uVar3 = Rotatelab_Boosters_BounceBoosterController__CheckForCompletionCoroutine_1132bb4();
  uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
  puVar4 = (undefined4 *)(param_1 + 0x10);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

