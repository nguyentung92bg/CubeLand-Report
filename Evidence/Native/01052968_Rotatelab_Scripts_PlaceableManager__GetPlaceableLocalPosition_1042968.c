/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$GetPlaceableLocalPosition
UnityEngine_Vector3_o Rotatelab_Scripts_PlaceableManager__GetPlaceableLocalPosition (Rotatelab_Scripts_PlaceableManager_o* __this, UnityEngine_Vector2Int_o index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$GetPlaceableLocalPosition
   UnityEngine_Vector3_o Rotatelab_Scripts_PlaceableManager__GetPlaceableLocalPosition
   (Rotatelab_Scripts_PlaceableManager_o* __this, UnityEngine_Vector2Int_o index, const MethodInfo*
   method); */

void Rotatelab_Scripts_PlaceableManager__GetPlaceableLocalPosition_1042968
               (float *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = *(float *)(param_2 + 0x48);
  fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = *(float *)(param_2 + 0x4c);
  fVar5 = *(float *)(param_2 + 0x54);
  fVar6 = *(float *)(param_2 + 0x5c);
  param_1[1] = *(float *)(param_2 + 0x58) + _UNK_010529ac;
  param_1[2] = fVar6 + fVar4 * fVar1;
  *param_1 = fVar5 + fVar3 * fVar2;
  return;
}

