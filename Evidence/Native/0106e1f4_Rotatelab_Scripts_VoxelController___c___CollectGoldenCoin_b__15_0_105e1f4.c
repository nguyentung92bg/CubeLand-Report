/* IL2CPP: Rotatelab.Scripts.VoxelController.<>c$$<CollectGoldenCoin>b__15_0
void Rotatelab_Scripts_VoxelController___c___CollectGoldenCoin_b__15_0 (Rotatelab_Scripts_VoxelController___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelController.<>c$$<CollectGoldenCoin>b__15_0
   void Rotatelab_Scripts_VoxelController___c___CollectGoldenCoin_b__15_0
   (Rotatelab_Scripts_VoxelController___c_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_VoxelController___c___CollectGoldenCoin_b__15_0_105e1f4(void)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)(_UNK_0106e264 + 0x106e208);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e268 + 0x106e21c));
    *pcVar1 = '\x01';
  }
  uVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0106e26c + 0x106e230));
  if ((int)uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__OnTemporaryCoinsCollected_1083c68
            ((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1,0,0);
  return;
}

