/* IL2CPP: Rotatelab.Extensions$$Count<__Il2CppFullySharedGenericType>
int32_t Rotatelab_Extensions__Count___Il2CppFullySharedGenericType_ (System_Collections_Generic_IEnumerable_T__o* enumerable, const MethodInfo_14860DC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x014963b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Count<__Il2CppFullySharedGenericType>
   int32_t Rotatelab_Extensions__Count___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IEnumerable_T__o* enumerable, const MethodInfo_14860DC* method); */

void Rotatelab_Extensions__Count___Il2CppFullySharedGenericType__14860dc(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  int aiStack_48 [2];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int **ppiStack_38;
  int *piStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0149641c + 0x14960fc);
  piVar2 = *(int **)(param_2 + 0x1c);
  if (piVar2 == (int *)0x0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01496420 + 0x149611c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01496424 + 0x1496128));
    piVar2 = *(int **)(param_2 + 0x1c);
    if (piVar2 == (int *)0x0) {
      FUN_00efd7c4(param_2);
      piVar2 = *(int **)(param_2 + 0x1c);
    }
  }
  iVar6 = -(*(int *)(piVar2[4] + 0x84) + 7U & 0xfffffff8);
  piStack_34 = (int *)0x0;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *piVar2;
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = FUN_00efd768(iVar7);
  }
  iVar3 = *param_1;
  uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar8 != 0) {
    piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar2[-1] == iVar7) {
        puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
        goto LAB_014961d8;
      }
      uVar8 = uVar8 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(param_1,iVar7,0);
LAB_014961d8:
  piStack_34 = (int *)(*(code *)*puVar4)(param_1,puVar4[1]);
  ppiStack_38 = &piStack_34;
  uStack_3c = 0;
  piVar2 = *(int **)(_UNK_01496428 + 0x1496210);
  do {
    piVar1 = piStack_34;
    if (piStack_34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piStack_34;
    uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar7 + *piVar9 * 8 + 0xc0);
          goto LAB_01496268;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piStack_34,*piVar2,0);
LAB_01496268:
    iVar7 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    piVar1 = piStack_34;
    if (iVar7 == 0) {
      if (piStack_34 == (int *)0x0) goto LAB_014963ac;
      iVar6 = *piStack_34;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 == 0) goto LAB_01496380;
      piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      break;
    }
    if (piStack_34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*(int *)(param_2 + 0x1c) + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768(iVar7);
    }
    iVar3 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar7) {
          iVar7 = iVar3 + *piVar9 * 8 + 0xc0;
          goto LAB_014962fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    iVar7 = FUN_00efdb38(piVar1,iVar7,0);
LAB_014962fc:
    iVar7 = *(int *)(iVar7 + 4);
    uVar5 = *(undefined4 *)(iVar7 + 4);
    pcVar10 = *(code **)(iVar7 + 8);
    puStack_30 = auStack_40 + iVar6;
    *(undefined1 **)((int)aiStack_48 + iVar6) = auStack_40 + iVar6;
    (*pcVar10)(uVar5,iVar7,piVar1,&puStack_30);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar2 = piVar2 + 2;
    if (uVar8 == 0) break;
    if (piVar2[-1] == **(int **)(_UNK_0149642c + 0x1496354)) {
      puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
      goto LAB_0149639c;
    }
  }
LAB_01496380:
  puVar4 = (undefined4 *)FUN_00efdb38(piStack_34,**(int **)(_UNK_0149642c + 0x1496354),0);
LAB_0149639c:
  (*(code *)*puVar4)(piVar1,puVar4[1]);
LAB_014963ac:
  if (**(int **)(_UNK_01496430 + 0x14963cc) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iStack_2c);
  }
  return;
}

