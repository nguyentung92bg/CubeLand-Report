/* IL2CPP: Rotatelab.Grid.GridManager$$Initialize
void Rotatelab_Grid_GridManager__Initialize (Rotatelab_Grid_GridManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$Initialize
   void Rotatelab_Grid_GridManager__Initialize (Rotatelab_Grid_GridManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Grid_GridManager__Initialize_110695c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_011169c8 + 0x1116970);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011169cc + 0x1116984));
    *pcVar5 = '\x01';
  }
  uVar3 = UnityEngine_Component__GetComponent_object__143f3b0
                    (param_1,**(undefined4 **)(_UNK_011169d0 + 0x1116998));
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = Rotatelab_Grid_DynamicGrid__Get_1105764();
  puVar4 = (undefined4 *)(param_1 + 0x18);
  *puVar4 = uVar3;
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

