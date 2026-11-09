/* IL2CPP: Rotatelab.Ads.AdManager$$<InitializeCoroutine>b__48_1
void Rotatelab_Ads_AdManager___InitializeCoroutine_b__48_1 (Rotatelab_Ads_AdManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.AdManager$$<InitializeCoroutine>b__48_1
   void Rotatelab_Ads_AdManager___InitializeCoroutine_b__48_1 (Rotatelab_Ads_AdManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Ads_AdManager___InitializeCoroutine_b__48_1_10f6678(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
    return;
  }
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  *(float *)(iVar2 + 0x44) = fVar1 + *(float *)(iVar2 + 0x40);
  return;
}

