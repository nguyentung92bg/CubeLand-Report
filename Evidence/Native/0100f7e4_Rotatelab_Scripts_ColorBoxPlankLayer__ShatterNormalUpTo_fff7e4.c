/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$ShatterNormalUpTo
void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterNormalUpTo (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, int32_t target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$ShatterNormalUpTo
   void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterNormalUpTo
   (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, int32_t target, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterNormalUpTo_fff7e4(int param_1,undefined4 param_2)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  
  pcVar3 = (char *)(_UNK_0100f9b0 + 0x100f804);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f9b4 + 0x100f818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f9b8 + 0x100f824));
    *pcVar3 = '\x01';
  }
  fVar1 = _UNK_0100f9ac;
  if (0 < *(int *)(param_1 + 0x24)) {
    uVar2 = 0;
    fVar12 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    pcVar3 = (char *)(_UNK_0100f9bc + 0x100f854);
    piVar7 = *(int **)(_UNK_0100f9c0 + 0x100f85c);
    puVar8 = *(undefined4 **)(_UNK_0100f9c4 + 0x100f864);
    do {
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = *(int *)(iVar4 + uVar2 * 4 + 0x10);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(iVar4 + 0xc);
      uVar13 = *(undefined4 *)(param_1 + 0x24);
      if (*pcVar3 == '\0') {
        FUN_00ec37c0(piVar7);
        *pcVar3 = '\x01';
      }
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar10 = (float)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (float)FUN_01f4f1b4((fVar12 * fVar9) / fVar10);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar1) << 0x1e;
      iVar11 = (int)fVar9;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        iVar11 = -0x80000000;
      }
      if (iVar5 < iVar11) {
        iVar11 = iVar5;
      }
      while( true ) {
        iVar5 = *(int *)(param_1 + 0x18);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (iVar11 <= *(int *)(iVar5 + uVar2 * 4 + 0x10)) break;
        iVar5 = *(int *)(param_1 + 0x18);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar5 = iVar5 + uVar2 * 4;
        iVar6 = *(int *)(iVar5 + 0x10);
        *(int *)(iVar5 + 0x10) = iVar6 + 1;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar13 = System_Collections_Generic_List_object___get_Item_267d814(iVar4,iVar6,*puVar8);
        Rotatelab_Scripts_ColorBoxPlankLayer__ShatterPlank_fffa8c(param_1,uVar13);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 6);
  }
  return;
}

