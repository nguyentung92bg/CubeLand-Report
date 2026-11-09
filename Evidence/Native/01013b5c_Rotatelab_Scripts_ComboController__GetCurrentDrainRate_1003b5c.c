/* IL2CPP: Rotatelab.Scripts.ComboController$$GetCurrentDrainRate
float Rotatelab_Scripts_ComboController__GetCurrentDrainRate (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$GetCurrentDrainRate
   float Rotatelab_Scripts_ComboController__GetCurrentDrainRate
   (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method); */

float Rotatelab_Scripts_ComboController__GetCurrentDrainRate_1003b5c(int param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  
  pcVar3 = (char *)(_UNK_01013c00 + 0x1013b74);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013c04 + 0x1013b88));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_01013c08 + 0x1013b9c);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar6 = *(float *)(iVar1 + 0x2c);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = (float)FUN_01f4f1c0(*(float *)(iVar1 + 0x30) + 1.0,uVar5);
  return fVar6 * fVar2;
}

