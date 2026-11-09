/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$OnActivated
void Rotatelab_Boosters_BaseBoosterController__OnActivated (Rotatelab_Boosters_BaseBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01027bc0) */
/* WARNING: Removing unreachable block (ram,0x01027bc8) */
/* WARNING: Removing unreachable block (ram,0x01027bcc) */
/* WARNING: Removing unreachable block (ram,0x014984c8) */
/* WARNING: Removing unreachable block (ram,0x014984e0) */
/* WARNING: Removing unreachable block (ram,0x014984e8) */
/* WARNING: Removing unreachable block (ram,0x014984f0) */
/* WARNING: Removing unreachable block (ram,0x014984f4) */
/* WARNING: Removing unreachable block (ram,0x01498514) */
/* WARNING: Removing unreachable block (ram,0x0149852c) */
/* WARNING: Removing unreachable block (ram,0x01498530) */
/* WARNING: Removing unreachable block (ram,0x01498544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$OnActivated
   void Rotatelab_Boosters_BaseBoosterController__OnActivated
   (Rotatelab_Boosters_BaseBoosterController_o* __this, const MethodInfo* method); */

uint Rotatelab_Boosters_BaseBoosterController__OnActivated_1132370(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  
  pcVar8 = (char *)(_UNK_011423d8 + 0x1142384);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011423dc + 0x1142398));
    *pcVar8 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011423e0 + 0x11423ac));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c),1,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar8 = '\x01';
  }
  piVar9 = *(int **)(iVar1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768(iVar4);
  }
  iVar2 = *piVar9;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar9,iVar4,4);
LAB_01494a00:
  uVar5 = (*(code *)*puVar3)(piVar9,param_1,puVar3[1]);
  if (uVar5 == 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar4 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar1) {
          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,iVar1,2);
LAB_01494a8c:
    (*(code *)*puVar3)(piVar9,param_1,puVar3[1]);
  }
  return uVar5 ^ 1;
}

