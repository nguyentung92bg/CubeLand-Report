/* IL2CPP: Rotatelab.RemoteConfigManager.<>c$$<InitializeAsync>b__50_0
bool Rotatelab_RemoteConfigManager___c___InitializeAsync_b__50_0 (Rotatelab_RemoteConfigManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager.<>c$$<InitializeAsync>b__50_0
   bool Rotatelab_RemoteConfigManager___c___InitializeAsync_b__50_0
   (Rotatelab_RemoteConfigManager___c_o* __this, const MethodInfo* method); */

undefined1 Rotatelab_RemoteConfigManager___c___InitializeAsync_b__50_0_10753c4(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01085458 + 0x10853d4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108545c + 0x10853e8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01085460 + 0x10853fc);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_01085464 + 0x1085418);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085468 + 0x108542c));
    *pcVar2 = '\x01';
  }
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4);
}

