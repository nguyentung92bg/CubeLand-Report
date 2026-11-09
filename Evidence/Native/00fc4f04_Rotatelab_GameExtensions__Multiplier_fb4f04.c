/* IL2CPP: Rotatelab.GameExtensions$$Multiplier
int32_t Rotatelab_GameExtensions__Multiplier (int32_t difficulty, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$Multiplier
   int32_t Rotatelab_GameExtensions__Multiplier (int32_t difficulty, const MethodInfo* method); */

undefined4 Rotatelab_GameExtensions__Multiplier_fb4f04(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fc4fa8 + 0xfc4f18);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4fac + 0xfc4f2c));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fc4fb0 + 0xfc4f40));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  if (param_1 == 1) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = (undefined4 *)(iVar1 + 0x10);
  }
  else if (param_1 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = (undefined4 *)(iVar1 + 0xc);
  }
  else {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = (undefined4 *)(iVar1 + 0x14);
  }
  return *puVar2;
}

