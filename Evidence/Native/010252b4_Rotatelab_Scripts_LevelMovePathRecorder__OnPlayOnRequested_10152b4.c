/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnPlayOnRequested
void Rotatelab_Scripts_LevelMovePathRecorder__OnPlayOnRequested (Rotatelab_UI_PlayOnOffer_o offer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnPlayOnRequested
   void Rotatelab_Scripts_LevelMovePathRecorder__OnPlayOnRequested (Rotatelab_UI_PlayOnOffer_o
   offer, const MethodInfo* method); */

void Rotatelab_Scripts_LevelMovePathRecorder__OnPlayOnRequested_10152b4
               (undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  pcVar5 = (char *)(_UNK_0102540c + 0x10252c8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025410 + 0x10252dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025414 + 0x10252e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025418 + 0x10252f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102541c + 0x1025300));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01025420 + 0x1025314);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 8) != '\0') {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_LevelMovePathRecorder__AppendDockedBlasterIds_1015430
              (**(undefined4 **)(_UNK_01025424 + 0x1025354));
    if ((param_3 & 1) != 0) {
      iVar3 = *piVar6;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar6;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = *(int *)(iVar3 + 8);
      uVar9 = *(uint *)(iVar3 + 0xc);
      iVar10 = **(int **)(_UNK_01025428 + 0x102539c);
      puVar4 = *(undefined4 **)(_UNK_0102542c + 0x10253bc);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      uVar7 = *puVar4;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar9 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar9 + 1;
        puVar4 = (undefined4 *)(iVar8 + uVar9 * 4 + 0x10);
        *puVar4 = uVar7;
      }
      else {
        uVar9 = *(uint *)(iVar3 + 0xc);
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar3,uVar9 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar8 = *(int *)(iVar3 + 8);
        *(uint *)(iVar3 + 0xc) = uVar9 + 1;
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar8 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        puVar4 = (undefined4 *)(iVar8 + uVar9 * 4 + 0x10);
        *puVar4 = uVar7;
      }
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

