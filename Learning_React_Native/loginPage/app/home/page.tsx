import { View, Text, TouchableOpacity, StyleSheet } from 'react-native';
import { useAuth } from '../../hooks/useAuth';

export default function HomePage() {
  const { setIsLoggedIn } = useAuth();

  return (
    <View style={styles.container}>
      <Text style={styles.title}>Welcome to Home!</Text>

      <TouchableOpacity style={styles.button} onPress={() => setIsLoggedIn(false)}>
        <Text style={styles.buttonText}>Logout</Text>
      </TouchableOpacity>
    </View>
  );
}

const styles = StyleSheet.create({
  container: { flex: 1, justifyContent: 'center', alignItems: 'center' },
  title: { fontSize: 28, marginBottom: 20 },
  button: { padding: 15, backgroundColor: '#ff4d4d', borderRadius: 8 },
  buttonText: { color: '#fff', fontWeight: 'bold', fontSize: 16 },
});
