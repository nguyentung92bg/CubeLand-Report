/* IL2CPP: Rotatelab.Scripts.ComboController$$GetNormalizedFill
float Rotatelab_Scripts_ComboController__GetNormalizedFill (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$GetNormalizedFill
   float Rotatelab_Scripts_ComboController__GetNormalizedFill (Rotatelab_Scripts_ComboController_o*
   __this, const MethodInfo* method); */

float Rotatelab_Scripts_ComboController__GetNormalizedFill_1003c0c(int param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  float fVar4;
  
  pcVar3 = (char *)(_UNK_01013c8c + 0x1013c24);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013c90 + 0x1013c38));
    *pcVar3 = '\x01';
  }
  fVar4 = *(float *)(param_1 + 0x10);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01013c94 + 0x1013c4c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c
                           (iVar1,*(undefined4 *)(param_1 + 0x14),0);
  return fVar4 / fVar2;
}

