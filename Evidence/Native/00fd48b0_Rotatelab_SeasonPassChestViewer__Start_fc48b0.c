/* IL2CPP: Rotatelab.SeasonPassChestViewer$$Start
void Rotatelab_SeasonPassChestViewer__Start (Rotatelab_SeasonPassChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassChestViewer$$Start
   void Rotatelab_SeasonPassChestViewer__Start (Rotatelab_SeasonPassChestViewer_o* __this, const
   MethodInfo* method); */

void Rotatelab_SeasonPassChestViewer__Start_fc48b0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = UnityEngine_Camera__get_main_35aede4(0);
  puVar4 = (undefined4 *)(param_1 + 0x30);
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

