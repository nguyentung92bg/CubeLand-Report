/* IL2CPP: Rotatelab.Scripts.GameManager$$OnMainCanvasChangeEndedHandler
void Rotatelab_Scripts_GameManager__OnMainCanvasChangeEndedHandler (Rotatelab_Scripts_GameManager_o* __this, int32_t mainCanvasType, bool arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$OnMainCanvasChangeEndedHandler
   void Rotatelab_Scripts_GameManager__OnMainCanvasChangeEndedHandler
   (Rotatelab_Scripts_GameManager_o* __this, int32_t mainCanvasType, bool arg2, const MethodInfo*
   method); */

void Rotatelab_Scripts_GameManager__OnMainCanvasChangeEndedHandler_1066d98
               (undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_01076e2c + 0x1076dac);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076e30 + 0x1076dc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076e34 + 0x1076dcc));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01076e38 + 0x1076de0);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  piVar7 = (int *)**(undefined4 **)(iVar1 + 0x5c);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = **(int **)(_UNK_01076e3c + 0x1076e14);
  uVar2 = (uint)(param_2 == 1);
  iVar1 = piVar7[5];
  if (iVar1 != 0) {
    uVar2 = (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),uVar2,*(undefined4 *)(iVar1 + 0x14),
                       *(code **)(iVar1 + 0xc),unaff_r4,unaff_r5);
  }
  piVar3 = (int *)FUN_01444054(*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x24));
  if ((char)piVar7[7] == '\0') {
    uVar4 = (**(code **)(*piVar7 + 0xe0))(piVar7,*(undefined4 *)(*piVar7 + 0xe4));
    *(char *)((int)piVar7 + 0x1d) = (char)uVar4;
    *(undefined1 *)(piVar7 + 7) = 1;
  }
  else {
    uVar4 = (uint)(*(char *)((int)piVar7 + 0x1d) != '\0');
  }
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar3 + 0x100))(piVar3,uVar4,uVar2,*(undefined4 *)(*piVar3 + 0x104));
  if (iVar1 == 0) {
    (**(code **)(*piVar7 + 0xe8))(piVar7,uVar2,*(undefined4 *)(*piVar7 + 0xec));
    iVar1 = piVar7[6];
    *(char *)((int)piVar7 + 0x1d) = (char)uVar2;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar2,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}

