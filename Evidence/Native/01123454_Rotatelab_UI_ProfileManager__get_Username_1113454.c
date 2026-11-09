/* IL2CPP: Rotatelab.UI.ProfileManager$$get_Username
System_String_o* Rotatelab_UI_ProfileManager__get_Username (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$get_Username
   System_String_o* Rotatelab_UI_ProfileManager__get_Username (Rotatelab_UI_ProfileManager_o*
   __this, const MethodInfo* method); */

int Rotatelab_UI_ProfileManager__get_Username_1113454(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  
  pcVar5 = (char *)(_UNK_011235dc + 0x1123464);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011235e0 + 0x1123478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011235e4 + 0x1123484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011235e8 + 0x1123490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011235ec + 0x112349c));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011235f0 + 0x11234b0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar6 = *(int **)(*(int *)(iVar1 + 0x20) + 0x1c);
  iVar1 = 0;
  if (piVar6 != (int *)0x0) {
    iVar7 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_011235f4 + 0x11234f4)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
          goto LAB_0112353c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_011235f4 + 0x11234f4),0);
LAB_0112353c:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    if (piVar6 != (int *)0x0) {
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_011235f8 + 0x1123568)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
            goto LAB_011235b0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_011235f8 + 0x1123568),1);
LAB_011235b0:
      iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    }
  }
  iVar7 = **(int **)(_UNK_011235fc + 0x11235d4);
  if (iVar1 != 0) {
    iVar7 = iVar1;
  }
  return iVar7;
}

