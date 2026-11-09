/* IL2CPP: Rotatelab.GameAction<Int32Enum, Vector3, int, float, float>$$DestroyEvent
void Rotatelab_GameAction_Int32Enum__Vector3__int__float__float___DestroyEvent (Rotatelab_GameAction_T1__T2__T3__T4__T5__o* __this, const MethodInfo_23A7B74* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameAction<Int32Enum, Vector3, int, float, float>$$DestroyEvent
   void Rotatelab_GameAction_Int32Enum__Vector3__int__float__float___DestroyEvent
   (Rotatelab_GameAction_T1__T2__T3__T4__T5__o* __this, const MethodInfo_23A7B74* method); */

void Rotatelab_GameAction_Int32Enum__Vector3__int__float__float___DestroyEvent_23a7b74(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 8);
  *puVar3 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

