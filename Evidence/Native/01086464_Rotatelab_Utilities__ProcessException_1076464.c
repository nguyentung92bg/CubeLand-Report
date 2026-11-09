/* IL2CPP: Rotatelab.Utilities$$ProcessException
void Rotatelab_Utilities__ProcessException (System_Exception_o* e, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Utilities$$ProcessException
   void Rotatelab_Utilities__ProcessException (System_Exception_o* e,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void Rotatelab_Utilities__ProcessException_1076464(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01086520 + 0x108647c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01086524 + 0x1086490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01086528 + 0x108649c));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0108652c + 0x10864b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Utilities___ProcessException_g__IsExceptionHarmless_9_0_107e100(param_1,param_2)
  ;
  iVar3 = *(int *)(**(int **)(_UNK_01086530 + 0x10864e0) + 0x74);
  if (iVar1 == 0) {
    if (iVar3 == 0) {
      FUN_00ec3934();
    }
    pcVar7 = (char *)(_UNK_035b947c + 0x35b9370);
    if (*pcVar7 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b9480 + 0x35b9384),0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b9484 + 0x35b9390));
      *pcVar7 = '\x01';
    }
    piVar6 = *(int **)(_UNK_035b9488 + 0x35b93a4);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar7 = (char *)(_UNK_035b948c + 0x35b93c0);
    if (*pcVar7 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b9490 + 0x35b93d4));
      *pcVar7 = '\x01';
    }
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      thunk_FUN_00ec3934();
      iVar1 = *piVar6;
    }
    piVar6 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_035b9494 + 0x35b9418)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
          goto LAB_035b9460;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035b9494 + 0x35b9418),1);
LAB_035b9460:
                    /* WARNING: Could not recover jumptable at 0x035b9478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,param_1,0,puVar2[1]);
    return;
  }
  if (iVar3 == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_035c24ac + 0x35c23a0);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b0 + 0x35c23b4),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b4 + 0x35c23c0));
    *pcVar7 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c24b8 + 0x35c23d4);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_035c24bc + 0x35c23f0);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24c0 + 0x35c2404));
    *pcVar7 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar6;
  }
  piVar6 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_035c24c4 + 0x35c2448)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
        goto LAB_035c2490;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c24c4 + 0x35c2448),3);
LAB_035c2490:
                    /* WARNING: Could not recover jumptable at 0x035c24a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,0,param_1,puVar2[1]);
  return;
}

