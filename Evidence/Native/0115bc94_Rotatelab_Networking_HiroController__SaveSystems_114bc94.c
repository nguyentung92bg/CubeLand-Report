/* IL2CPP: Rotatelab.Networking.HiroController$$SaveSystems
void Rotatelab_Networking_HiroController__SaveSystems (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0115bfcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$SaveSystems
   void Rotatelab_Networking_HiroController__SaveSystems (Rotatelab_Networking_HiroController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__SaveSystems_114bc94(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  
  pcVar10 = (char *)(_UNK_0115c01c + 0x115bcac);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c020 + 0x115bcc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c024 + 0x115bccc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c028 + 0x115bcd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c02c + 0x115bce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c030 + 0x115bcf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c034 + 0x115bcfc));
    *pcVar10 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0115c038 + 0x115bd14));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(*(int *)(param_1 + 0x1c) + 0x24);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar9;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_0115c03c + 0x115bd64)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_0115bdac;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0115c03c + 0x115bd64),0);
LAB_0115bdac:
  piVar9 = (int *)(*(code *)*puVar2)(piVar9,puVar2[1]);
  piVar11 = *(int **)(_UNK_0115c040 + 0x115bde0);
  piVar12 = *(int **)(_UNK_0115c044 + 0x115bde8);
  piVar6 = *(int **)(_UNK_0115c048 + 0x115bdf0);
  do {
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_0115be48;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar9,*piVar11,0);
LAB_0115be48:
    iVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar1 == 0) {
      if (piVar9 == (int *)0x0) {
        return;
      }
      iVar1 = *piVar9;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 == 0) goto LAB_0115bf98;
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      break;
    }
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_0115bec0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar9,*piVar12,0);
LAB_0115bec0:
    uVar3 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    piVar7 = (int *)thunk_FUN_00f00bc8(uVar3,*piVar6);
    if (piVar7 != (int *)0x0) {
      iVar1 = *piVar7;
      iVar4 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar4) {
            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd8);
            goto LAB_0115bf34;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar7,iVar4,3);
LAB_0115bf34:
      (*(code *)*puVar2)(piVar7,puVar2[1]);
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 2;
    if (uVar5 == 0) break;
    if (piVar6[-1] == **(int **)(_UNK_0115c04c + 0x115bf6c)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
      goto LAB_0115bfb4;
    }
  }
LAB_0115bf98:
  puVar2 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0115c04c + 0x115bf6c),0);
LAB_0115bfb4:
  (*(code *)*puVar2)(piVar9,puVar2[1]);
  return;
}

