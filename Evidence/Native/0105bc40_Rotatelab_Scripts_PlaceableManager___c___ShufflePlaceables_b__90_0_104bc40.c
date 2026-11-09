/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShufflePlaceables>b__90_0
bool Rotatelab_Scripts_PlaceableManager___c___ShufflePlaceables_b__90_0 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BasePlaceableController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShufflePlaceables>b__90_0
   bool Rotatelab_Scripts_PlaceableManager___c___ShufflePlaceables_b__90_0
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BasePlaceableController_o*
   e, const MethodInfo* method); */

uint Rotatelab_Scripts_PlaceableManager___c___ShufflePlaceables_b__90_0_104bc40
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_0105bd14 + 0x105bc54);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105bd18 + 0x105bc68));
    *pcVar3 = '\x01';
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = 0;
  iVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_2,0);
  if (iVar1 < 5) {
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_0105bd1c + 0x105bc9c) + 0xb8);
    if ((uVar2 <= *(byte *)(*param_2 + 0xb8)) &&
       (*(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) == **(int **)(_UNK_0105bd1c + 0x105bc9c)
       )) {
      uVar4 = 0;
      uVar2 = Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0(param_2,0);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        uVar2 = (uint)*(byte *)(param_2 + 0x31);
      }
      if (bVar5 && uVar2 == 0) {
        uVar4 = Rotatelab_Scripts_BlasterController__get_HasColorBarrel_1030edc(param_2,0);
        uVar4 = uVar4 ^ 1;
      }
    }
  }
  return uVar4;
}

