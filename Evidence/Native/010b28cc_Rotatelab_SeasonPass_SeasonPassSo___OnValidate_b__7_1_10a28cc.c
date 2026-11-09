/* IL2CPP: Rotatelab.SeasonPass.SeasonPassSo$$<OnValidate>b__7_1
void Rotatelab_SeasonPass_SeasonPassSo___OnValidate_b__7_1 (Rotatelab_SeasonPass_SeasonPassSo_o* __this, Rotatelab_SeasonPass_SeasonPassSo_SeasonReward_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassSo$$<OnValidate>b__7_1
   void Rotatelab_SeasonPass_SeasonPassSo___OnValidate_b__7_1 (Rotatelab_SeasonPass_SeasonPassSo_o*
   __this, Rotatelab_SeasonPass_SeasonPassSo_SeasonReward_o* i, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassSo___OnValidate_b__7_1_10a28cc(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = (undefined4 *)(param_2 + 8);
  *puVar3 = param_1;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

