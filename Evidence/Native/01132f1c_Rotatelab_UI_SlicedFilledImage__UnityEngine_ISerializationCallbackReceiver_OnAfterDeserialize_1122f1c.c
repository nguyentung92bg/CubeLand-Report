/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
void Rotatelab_UI_SlicedFilledImage__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.UI.SlicedFilledImage$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
   void 
   Rotatelab_UI_SlicedFilledImage__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
   (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_1122f1c
               (int param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x88);
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  if (bVar1) {
    fVar2 = _UNK_01132f48;
  }
  *(float *)(param_1 + 0x88) = fVar2;
  return;
}

