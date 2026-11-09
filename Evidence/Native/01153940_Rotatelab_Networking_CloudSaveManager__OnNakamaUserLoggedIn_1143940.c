/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$OnNakamaUserLoggedIn
void Rotatelab_Networking_CloudSaveManager__OnNakamaUserLoggedIn (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011537e8) */
/* WARNING: Removing unreachable block (ram,0x011537e4) */
/* WARNING: Removing unreachable block (ram,0x011537f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$OnNakamaUserLoggedIn
   void Rotatelab_Networking_CloudSaveManager__OnNakamaUserLoggedIn
   (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__OnNakamaUserLoggedIn_1143940(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int *piVar6;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_01153a14 + 0x1153954);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153a18 + 0x1153968));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_Networking_CloudSaveManager__get_Nakama_11417dc();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar6 = *(int **)(iVar1 + 0x24);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01153a1c + 0x11539a4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
        goto LAB_011539ec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_01153a1c + 0x11539a4),1);
LAB_011539ec:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x11) = 1;
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14),
                 *(code **)(iVar1 + 0xc),unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    }
    return;
  }
  return;
}

