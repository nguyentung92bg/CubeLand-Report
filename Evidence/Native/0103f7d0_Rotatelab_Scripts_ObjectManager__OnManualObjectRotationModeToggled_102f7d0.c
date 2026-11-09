/* IL2CPP: Rotatelab.Scripts.ObjectManager$$OnManualObjectRotationModeToggled
void Rotatelab_Scripts_ObjectManager__OnManualObjectRotationModeToggled (Rotatelab_Scripts_ObjectManager_o* __this, bool isEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$OnManualObjectRotationModeToggled
   void Rotatelab_Scripts_ObjectManager__OnManualObjectRotationModeToggled
   (Rotatelab_Scripts_ObjectManager_o* __this, bool isEnabled, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__OnManualObjectRotationModeToggled_102f7d0
               (int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0103f848 + 0x103f7e8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f84c + 0x103f7fc));
    *pcVar3 = '\x01';
  }
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_2 == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0103f850 + 0x103f820));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Scripts_DockManager__get_AnyBlasterHasShootableTarget_100463c(iVar2,0);
  }
  *(undefined1 *)(param_1 + 0x88) = uVar1;
  return;
}

