/* IL2CPP: Rotatelab.SoLevelOverridesData$$OnEnable
void Rotatelab_SoLevelOverridesData__OnEnable (Rotatelab_SoLevelOverridesData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelOverridesData$$OnEnable
   void Rotatelab_SoLevelOverridesData__OnEnable (Rotatelab_SoLevelOverridesData_o* __this, const
   MethodInfo* method); */

void Rotatelab_SoLevelOverridesData__OnEnable_1070eec(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  pcVar2 = (char *)(_UNK_01080fd8 + 0x1080f04);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01080fdc + 0x1080f18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01080fe0 + 0x1080f24));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01080fe4 + 0x1080f38) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = 0;
  iVar1 = UnityEngine_Application__get_isPlaying_35a7178(0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    while( true ) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar4) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar3 = *(int *)(iVar1 + 0x10 + uVar4 * 4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_int__object___set_Item_1fcfa9c
                (*(int *)(param_1 + 0x10),*(int *)(iVar3 + 8) + -1,*(undefined4 *)(iVar3 + 0xc),
                 **(undefined4 **)(_UNK_01080fe8 + 0x1080fc0));
      uVar4 = uVar4 + 1;
    }
  }
  return;
}

