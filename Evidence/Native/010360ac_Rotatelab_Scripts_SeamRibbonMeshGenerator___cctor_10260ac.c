/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$.cctor
void Rotatelab_Scripts_SeamRibbonMeshGenerator___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$.cctor
   void Rotatelab_Scripts_SeamRibbonMeshGenerator___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_SeamRibbonMeshGenerator___cctor_10260ac(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_010361ec + 0x10360bc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010361f0 + 0x10360d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010361f4 + 0x10360dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010361f8 + 0x10360e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010361fc + 0x10360f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036200 + 0x1036100));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036204 + 0x103610c));
    *pcVar4 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_01036208 + 0x1036124);
  uVar3 = FUN_00ec388c(*puVar6,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_2a95320
            (uVar3,**(undefined4 **)(_UNK_0103620c + 0x103613c),0);
  piVar5 = *(int **)(_UNK_01036210 + 0x1036154);
  **(undefined4 **)(*piVar5 + 0x5c) = uVar3;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar5 + 0x5c),uVar3);
  uVar3 = FUN_00ec388c(*puVar6,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_2a95320
            (uVar3,**(undefined4 **)(_UNK_01036214 + 0x1036188),0);
  puVar6 = (undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4);
  *puVar6 = uVar3;
  thunk_FUN_00ec5080(puVar6,uVar3);
  uVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_01036218 + 0x10361b4),4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_2a95320
            (uVar3,**(undefined4 **)(_UNK_0103621c + 0x10361cc),0);
  puVar6 = (undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8);
  *puVar6 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

