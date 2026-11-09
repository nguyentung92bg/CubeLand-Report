/* IL2CPP: Rotatelab.Extensions$$Count<object>
int32_t Rotatelab_Extensions__Count_object_ (System_Collections_Generic_IEnumerable_T__o* enumerable, const MethodInfo_1485DF8* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0149607c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Count<object>
   int32_t Rotatelab_Extensions__Count_object_ (System_Collections_Generic_IEnumerable_T__o*
   enumerable, const MethodInfo_1485DF8* method); */

int Rotatelab_Extensions__Count_object__1485df8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_014960cc + 0x1495e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_014960d0 + 0x1495e2c));
    if (*(int *)(param_2 + 0x1c) == 0) {
      FUN_00efd7c4(param_2);
    }
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = **(int **)(param_2 + 0x1c);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768(iVar4);
  }
  iVar1 = *param_1;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01495ec0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar4,0);
LAB_01495ec0:
  piVar6 = (int *)(*(code *)*puVar2)(param_1,puVar2[1]);
  iVar4 = 0;
  piVar8 = *(int **)(_UNK_014960d4 + 0x1495ef4);
  do {
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar8) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01495f4c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar6,*piVar8,0);
LAB_01495f4c:
    iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar1 == 0) {
      if (piVar6 == (int *)0x0) {
        return iVar4;
      }
      iVar1 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 == 0) goto LAB_01496048;
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      break;
    }
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar1) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_01495fe0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar6,iVar1,0);
LAB_01495fe0:
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    iVar4 = iVar4 + 1;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar8 = piVar8 + 2;
    if (uVar5 == 0) break;
    if (piVar8[-1] == **(int **)(_UNK_014960d8 + 0x149601c)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
      goto LAB_01496064;
    }
  }
LAB_01496048:
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_014960d8 + 0x149601c),0);
LAB_01496064:
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return iVar4;
}

