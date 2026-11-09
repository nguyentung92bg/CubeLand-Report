/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c__DisplayClass63_0$$<AnimateRainbowBlasterEntrance>b__0
void Rotatelab_Scripts_PlaceableManager___c__DisplayClass63_0___AnimateRainbowBlasterEntrance_b__0 (Rotatelab_Scripts_PlaceableManager___c__DisplayClass63_0_o* __this, UnityEngine_Transform_o* transform, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Rotatelab.Scripts.PlaceableManager.<>c__DisplayClass63_0$$<AnimateRainbowBlasterEntrance>b__0
   void 
   Rotatelab_Scripts_PlaceableManager___c__DisplayClass63_0___AnimateRainbowBlasterEntrance_b__0
   (Rotatelab_Scripts_PlaceableManager___c__DisplayClass63_0_o* __this, UnityEngine_Transform_o*
   transform, float t, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c__DisplayClass63_0___AnimateRainbowBlasterEntrance_b__0_104bd4c
               (int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x1c);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar1 = *(float *)(param_1 + 8) + (fVar4 - *(float *)(param_1 + 8)) * param_3;
  fVar2 = *(float *)(param_1 + 0xc) + (fVar5 - *(float *)(param_1 + 0xc)) * param_3;
  fVar3 = *(float *)(param_1 + 0x10) + (fVar6 - *(float *)(param_1 + 0x10)) * param_3;
  UnityEngine_Transform__set_localPosition_3613c6c
            (param_2,fVar1 + ((fVar4 + (*(float *)(param_1 + 0x20) - fVar4) * param_3) - fVar1) *
                             param_3,
             fVar2 + ((fVar5 + (*(float *)(param_1 + 0x24) - fVar5) * param_3) - fVar2) * param_3,
             fVar3 + ((fVar6 + (*(float *)(param_1 + 0x28) - fVar6) * param_3) - fVar3) * param_3,0)
  ;
  return;
}

