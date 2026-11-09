/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$get_BaseScale
UnityEngine_Vector3_o Rotatelab_CloudRush_CloudRushPlayerAvatarController__get_BaseScale (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$get_BaseScale
   UnityEngine_Vector3_o Rotatelab_CloudRush_CloudRushPlayerAvatarController__get_BaseScale
   (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushPlayerAvatarController__get_BaseScale_10e5758
               (float *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pcVar2 = (char *)(_UNK_010f57dc + 0x10f5770);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f57e0 + 0x10f5784));
    *pcVar2 = '\x01';
  }
  fVar3 = 1.0;
  if (*(char *)(param_2 + 0x44) == '\0') {
    fVar3 = _UNK_010f57d8;
  }
  iVar1 = *(int *)(**(int **)(_UNK_010f57e4 + 0x10f57a8) + 0x5c);
  fVar5 = *(float *)(iVar1 + 0x14);
  fVar4 = *(float *)(iVar1 + 0xc);
  param_1[1] = *(float *)(iVar1 + 0x10) * fVar3;
  param_1[2] = fVar5 * fVar3;
  *param_1 = fVar4 * fVar3;
  return;
}

