/* IL2CPP: Rotatelab.Scripts.LevelManager.<>c__DisplayClass39_0$$<LoadLevelExternally>b__0
bool Rotatelab_Scripts_LevelManager___c__DisplayClass39_0___LoadLevelExternally_b__0 (Rotatelab_Scripts_LevelManager___c__DisplayClass39_0_o* __this, Rotatelab_SoLevelDataAssetReference_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager.<>c__DisplayClass39_0$$<LoadLevelExternally>b__0
   bool Rotatelab_Scripts_LevelManager___c__DisplayClass39_0___LoadLevelExternally_b__0
   (Rotatelab_Scripts_LevelManager___c__DisplayClass39_0_o* __this,
   Rotatelab_SoLevelDataAssetReference_o* e, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager___c__DisplayClass39_0___LoadLevelExternally_b__0_106aa44
               (int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0107aadc + 0x107aa5c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107aae0 + 0x107aa70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107aae4 + 0x107aa7c));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                    (param_2,**(undefined4 **)(_UNK_0107aae8 + 0x107aa9c));
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_0107aaec + 0x107aab4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__op_Equality_36033f4(uVar1,uVar2,0);
  return;
}

